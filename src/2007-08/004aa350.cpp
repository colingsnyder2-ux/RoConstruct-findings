// from server: 88% by colin
// roc 2007-08 004aa350  unit: RBX::VInstance::?$NonFactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aa350
//
// 004aa350  56                   push esi
// 004aa351  8d442408             lea eax, [esp + 8]
// 004aa355  50                   push eax
// 004aa356  8bf1                 mov esi, ecx
// 004aa358  e873d6fdff           call 0x4879d0
// 004aa35d  83c404               add esp, 4
// 004aa360  84c0                 test al, al
// 004aa362  7539                 jne 0x4aa39d
// 004aa364  6a10                 push 0x10
// 004aa366  c7460890904a00       mov dword ptr [esi + 8], 0x4a9090
// 004aa36d  c70640914a00         mov dword ptr [esi], 0x4a9140
// 004aa373  e87e5b1800           call 0x62fef6
// 004aa378  83c404               add esp, 4
// 004aa37b  85c0                 test eax, eax
// 004aa37d  741b                 je 0x4aa39a
// 004aa37f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004aa383  8908                 mov dword ptr [eax], ecx
// 004aa385  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004aa389  895004               mov dword ptr [eax + 4], edx
// 004aa38c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aa390  894808               mov dword ptr [eax + 8], ecx
// 004aa393  8b542414             mov edx, dword ptr [esp + 0x14]
// 004aa397  89500c               mov dword ptr [eax + 0xc], edx
// 004aa39a  894604               mov dword ptr [esi + 4], eax
// 004aa39d  5e                   pop esi
// 004aa39e  c21400               ret 0x14

struct RBX_BaseClass {
    void* vtable;
    void* field4;
    void* field8;
};

struct RBX_NonFactoryProduct : RBX_BaseClass {
    void construct(int, int, int, int, int);
};

extern "C" char __stdcall sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void RBX_NonFactoryProduct::construct(int a, int b, int c, int d, int e)
{
    char local[4];
    if (sub_4879D0(local) == 0) {
        field8 = (void*)0x4a9090;
        vtable = (void*)0x4a9140;
        void* p = sub_62FEF6(0x10);
        if (p != 0) {
            *(int*)((char*)p + 0) = *(int*)(local + 0);
            *(int*)((char*)p + 4) = *(int*)(local + 4);
            *(int*)((char*)p + 8) = *(int*)(local + 8);
            *(int*)((char*)p + 12) = *(int*)(local + 12);
        }
        field4 = p;
    }
}
