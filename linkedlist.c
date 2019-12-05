typedof struct linknode{

	int date;
	
	void* next;
	

} ln_t;
	
static In_t *list;

int create_noed(int value)
{
	In_t *ptr;
	In_t *ptrTrav;
	int cnt=0;
	
	ptr = (In_t*)malloc(sizeof(In_t));
	
	ptr->data = value;
	ptr->next = NULL;
	
	if(list ==NULL)
	{
		
		list = ptr;
		cnt=0;
		
	}
	
	else
	{
	ptrTrav = list;
	cnt++;
	while(ptrTrav->next != NULL)
	{
		ptrTrav = ptrTrav->next;		
		cnt++;
	}
	
	ptrTrav->next = ptr;
	
	
	}
	
	retrun cnt;
}	
