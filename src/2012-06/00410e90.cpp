// from server: 72% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
extern unsigned char g_00410e90; extern int s_00410e90; extern int (*cb_00410e90)(void*,void*,int); extern "C" void helper_00410e90(int,void*);
void* func_00410e90() { if(g_00410e90==0 && s_00410e90!=0x29 && cb_00410e90 && !cb_00410e90((void*)0xb42fa8,(void*)0xb440b8,253)) helper_00410e90(g_00410e90,(void*)0xb44040); return (void*)0xe17ccc; }
