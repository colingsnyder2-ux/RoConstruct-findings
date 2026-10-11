// from server: 72% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
extern unsigned char g_00411ae0; extern int s_00411ae0; extern int (*cb_00411ae0)(void*,void*,int); extern "C" void helper_00411ae0(int,void*);
void* func_00411ae0() { if(g_00411ae0==0 && s_00411ae0!=0x29 && cb_00411ae0 && !cb_00411ae0((void*)0xb42fa8,(void*)0xb440b8,253)) helper_00411ae0(g_00411ae0,(void*)0xb44040); return (void*)0xe17cc0; }
