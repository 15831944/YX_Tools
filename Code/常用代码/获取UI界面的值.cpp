        //��ȡUI�����ֵ
        PropertyList* angleDoubleProps = angleDouble->GetProperties();
        double creationAngle = angleDoubleProps->GetDouble("Value");
        delete angleDoubleProps;
        angleDoubleProps = NULL;



    
		//��ȡ��
		PropertyList*  bodySelectProps = bodySelect->GetProperties();
		std::vector<NXOpen::TaggedObject *> bodys = bodySelectProps->GetTaggedObjectVector("SelectedObjects");
		delete bodySelectProps;
		bodySelectProps = NULL;
		  
		UF_initialize();
		UF_UI_open_listing_window();				//���������
		char msg[256];
		for ( int i = 0; i < bodys.size(); ++i) 
		{
					tag_t bodyTAG=bodys[i]->Tag();
		sprintf(msg,"%d",bodyTAG);
		UF_UI_write_listing_window(msg);
		UF_UI_write_listing_window("\n");			//��Ϣ���
			}

				UF_terminate();
		
		==============================================================
		//��ȡxxxx
		PropertyList*a = blockID->GetProperties();
		���� b=a->getxxxx();
		delete a;
		a=NULL;