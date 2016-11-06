#include<stdlib.h>
#incude "frames.h"
int alloc_frame(list *frames)
{
  int frame_number,*data;
  if(list_size(frames)==0)
    return -1;
  else
    {
      if(list_rem-next(frames,NUll,(void **)&data!)=0)
	 return -1;
	 else
	   {
	     frame_number=*data;
	     free(data);
	   }
	 }
  return frame_number;
}
int free_frame(list *frames,int frame_number)
{
  int *data;
  if((data=(*int)malloc(sizeof(int)))==NULL)
    return -1;
  *data=frame_number;
  if(list_ins_next(frames,NULL,data)!=0)
    return -1;
  return 0;
}
  
