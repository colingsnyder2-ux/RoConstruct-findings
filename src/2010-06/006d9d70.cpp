// from server: 100% by atomic.potato
// roc 2010-06 006d9d70  unit: RBX::VSurfaceSelection::?$FactoryProduct  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d9d70
//
// 006d9d70  56                   push esi
// 006d9d71  68c068a400           push 0xa468c0
// 006d9d76  8bf1                 mov esi, ecx
// 006d9d78  e863feffff           call 0x6d9be0
// 006d9d7d  c7066c68a400         mov dword ptr [esi], 0xa4686c
// 006d9d83  c746046468a400       mov dword ptr [esi + 4], 0xa46864
// 006d9d8a  c746185868a400       mov dword ptr [esi + 0x18], 0xa46858
// 006d9d91  c7461c4c68a400       mov dword ptr [esi + 0x1c], 0xa4684c
// 006d9d98  c786940000003c68a400 mov dword ptr [esi + 0x94], 0xa4683c
// 006d9da2  c786980000002468a400 mov dword ptr [esi + 0x98], 0xa46824
// 006d9dac  c786bc00000000000000 mov dword ptr [esi + 0xbc], 0
// 006d9db6  8bc6                 mov eax, esi
// 006d9db8  5e                   pop esi
// 006d9db9  c3                   ret 

struct X_006d9d70 {
    char pad_0[0xc0];
    void init(void* p);
    X_006d9d70* run();
};

X_006d9d70* X_006d9d70::run() {
    init((void*)0xa468c0);
    *(void**)((char*)this + 0) = (void*)0xa4686c;
    *(void**)((char*)this + 4) = (void*)0xa46864;
    *(void**)((char*)this + 0x18) = (void*)0xa46858;
    *(void**)((char*)this + 0x1c) = (void*)0xa4684c;
    *(void**)((char*)this + 0x94) = (void*)0xa4683c;
    *(void**)((char*)this + 0x98) = (void*)0xa46824;
    *(void**)((char*)this + 0xbc) = 0;
    return this;
}

X_006d9d70* func_006d9d70(X_006d9d70* x) { return x->run(); }
