#include"includes/BNLabelStore.h"

BNLabelStore::BNLabelStore()
{
	//eventually read from a file/csv. For now, simply put all information here
	addLabel(0,"unlabelled",255,255,255);
	addLabel(1,"book",255,0,0);
	addLabel(2,"table",0,255,0);
	addLabel(3,"mug",0,0,255);
	addLabel(4,"carton",0,255,255);
	addLabel(5,"bottle",255,255,0);
}

void BNLabelStore::addLabel(uint labelID,std::string labelName, uint red, uint green, uint blue)
{
	BNLabel newLabel(labelID,labelName,red,green,blue);
	m_labels.push_back(newLabel);	
}

std::vector<BNLabel>& BNLabelStore::GetLabels()
{
	return m_labels;	
}

BNLabelColor BNLabelStore::GetColorForLabel(uint labelID)
{
	return m_labels[labelID].m_color;
}

std::string BNLabelStore::GetNameForLabel(uint labelID)
{
	return m_labels[labelID].m_labelName;
}