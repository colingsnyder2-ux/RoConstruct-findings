// from server: 72% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
extern unsigned char g_004101f0; extern int s_004101f0; extern int (*cb_004101f0)(void*,void*,int); extern "C" void helper_004101f0(int,void*);
void* func_004101f0() { if(g_004101f0==0 && s_004101f0!=0x29 && cb_004101f0 && !cb_004101f0((void*)0xb42fa8,(void*)0xb440b8,253)) helper_004101f0(g_004101f0,(void*)0xb44040); return (void*)0xe17cd8; }
