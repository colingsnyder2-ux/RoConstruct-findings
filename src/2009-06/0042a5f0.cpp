// from server: 88% by colin
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void init(void*,void*);
extern "C" void fini(void*);
extern volatile int guard;
extern volatile void* g;
extern volatile int z;
extern "C" __declspec(noinline) void* f(){
    init((void*)0xa3a2a0,(void*)0x42a030);
    if(!(*(volatile unsigned char*)&guard)){guard|=1; g=0; z=0; fini((void*)0x894130);}
    return (void*)&g;
}
