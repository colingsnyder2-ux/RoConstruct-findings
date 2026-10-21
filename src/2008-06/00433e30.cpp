// from server: 67% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_membertreenative5aec2b993cf27054.cpp

// Candidate translation unit (score above; library headers required).
#include <afxwin.h>
#include <afxcmn.h>
void* createImages(unsigned);
struct Control {typedef void(__thiscall*Method)(Control*);Method*table;};
struct View{char prefix[0x20];HWND window;char gap[0x3c];Control control;char rest[0x3c];CImageList images;int baseCreate(void*);int create(void*);};
int View::create(void*a){if(baseCreate(a)!=-1){control.table[18](&control);CImageList*list=&images;if(!createImages(0xc4))return -1;CImageList::FromHandle((HIMAGELIST)::SendMessageA(window,0x1109,0,(LPARAM)list->GetSafeHandle()));return 0;}return -1;}
