// from server: 72% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
extern unsigned char g_0047dda0; extern int s_0047dda0; extern int (*cb_0047dda0)(void*,void*,int); extern "C" void helper_0047dda0(int,void*);
void* func_0047dda0() { if(g_0047dda0==0 && s_0047dda0!=0x29 && cb_0047dda0 && !cb_0047dda0((void*)0xb42fa8,(void*)0xb440b8,253)) helper_0047dda0(g_0047dda0,(void*)0xb44040); return (void*)0xe1641c; }
