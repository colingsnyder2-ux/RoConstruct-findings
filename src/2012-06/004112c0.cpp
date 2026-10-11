// from server: 72% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
extern unsigned char g_004112c0; extern int s_004112c0; extern int (*cb_004112c0)(void*,void*,int); extern "C" void helper_004112c0(int,void*);
void* func_004112c0() { if(g_004112c0==0 && s_004112c0!=0x29 && cb_004112c0 && !cb_004112c0((void*)0xb42fa8,(void*)0xb440b8,253)) helper_004112c0(g_004112c0,(void*)0xb44040); return (void*)0xe17cc8; }
