// from server: 72% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
extern unsigned char g_0047de40; extern int s_0047de40; extern int (*cb_0047de40)(void*,void*,int); extern "C" void helper_0047de40(int,void*);
void* func_0047de40() { if(g_0047de40==0 && s_0047de40!=0x29 && cb_0047de40 && !cb_0047de40((void*)0xb42fa8,(void*)0xb440b8,253)) helper_0047de40(g_0047de40,(void*)0xb44040); return (void*)0xe164a8; }
