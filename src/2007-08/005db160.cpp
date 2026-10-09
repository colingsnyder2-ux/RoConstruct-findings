// from server: 91% by colin
// roc 2007-08 005db160  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005db160
//
// 005db160  56                   push esi
// 005db161  8d442408             lea eax, [esp + 8]
// 005db165  50                   push eax
// 005db166  8bf1                 mov esi, ecx
// 005db168  e863c8eaff           call 0x4879d0
// 005db16d  83c404               add esp, 4
// 005db170  84c0                 test al, al
// 005db172  7539                 jne 0x5db1ad
// 005db174  6a10                 push 0x10
// 005db176  c74608f0ae5d00       mov dword ptr [esi + 8], 0x5daef0
// 005db17d  c706f0ad5d00         mov dword ptr [esi], 0x5dadf0
// 005db183  e86e4d0500           call 0x62fef6
// 005db188  83c404               add esp, 4
// 005db18b  85c0                 test eax, eax
// 005db18d  741b                 je 0x5db1aa
// 005db18f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005db193  8908                 mov dword ptr [eax], ecx
// 005db195  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005db199  895004               mov dword ptr [eax + 4], edx
// 005db19c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005db1a0  894808               mov dword ptr [eax + 8], ecx
// 005db1a3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005db1a7  89500c               mov dword ptr [eax + 0xc], edx
// 005db1aa  894604               mov dword ptr [esi + 4], eax
// 005db1ad  5e                   pop esi
// 005db1ae  c21400               ret 0x14
// library V8DataModel/Feature.cpp (function ??0?$FactoryProduct@VVelocityMotor@@VJointInstance@@...)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD


extern "C" char __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

struct FactoryProduct {
    void* vtable;
    void* field4;
    void* field8;
    void construct(void* arg0, void* arg1, void* arg2, void* arg3);
};

void FactoryProduct::construct(void* arg0, void* arg1, void* arg2, void* arg3)
{
    if (sub_4879D0(&arg0)) {
        return;
    }
    field8 = (void*)0x5daef0;
    vtable = (void*)0x5dadf0;
    void* p = sub_62FEF6(0x10);
    if (p) {
        ((void**)p)[0] = arg0;
        ((void**)p)[1] = arg1;
        ((void**)p)[2] = arg2;
        ((void**)p)[3] = arg3;
    }
    field4 = p;
}
