// from server: 90% by colin
// roc 2007-08 005245e0  unit: G3D::Line  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005245e0
//
// 005245e0  56                   push esi
// 005245e1  e89a9dffff           call 0x51e380
// 005245e6  85c0                 test eax, eax
// 005245e8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005245ec  89460c               mov dword ptr [esi + 0xc], eax
// 005245ef  752c                 jne 0x52461d
// 005245f1  57                   push edi
// 005245f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005245f6  8b07                 mov eax, dword ptr [edi]
// 005245f8  c740143f000000       mov dword ptr [eax + 0x14], 0x3f
// 005245ff  8b0f                 mov ecx, dword ptr [edi]
// 00524601  6a50                 push 0x50
// 00524603  83c118               add ecx, 0x18
// 00524606  6854597800           push 0x785954
// 0052460b  51                   push ecx
// 0052460c  ff1578e97700         call dword ptr [0x77e978]
// 00524612  8b17                 mov edx, dword ptr [edi]
// 00524614  8b02                 mov eax, dword ptr [edx]
// 00524616  57                   push edi
// 00524617  ffd0                 call eax
// 00524619  83c410               add esp, 0x10
// 0052461c  5f                   pop edi
// 0052461d  c706f0445200         mov dword ptr [esi], 0x5244f0
// 00524623  c7460460455200       mov dword ptr [esi + 4], 0x524560
// 0052462a  c74608d0455200       mov dword ptr [esi + 8], 0x5245d0
// 00524631  5e                   pop esi
// 00524632  c3                   ret 

struct Line {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
};

extern "C" void* __cdecl sub_51E380();
extern "C" void* __cdecl sub_5244F0();
extern "C" void* __cdecl sub_524560();
extern "C" void* __cdecl sub_5245D0();
extern "C" char* __cdecl strncpy(char*, const char*, unsigned int);

void construct(Line* self, void* from, void* to)
{
    void* p = sub_51E380();
    self->fieldC = (int)p;
    if (p == 0) {
        void* q = *(void**)from;
        *(int*)((char*)q + 0x14) = 0x3f;
        void* r = *(void**)from;
        strncpy((char*)r + 0x18, (const char*)0x785954, 0x50);
        void* s = *(void**)from;
        void (*fn)(void*) = *(void (**)(void*))s;
        fn(from);
    }
    self->field0 = (void*)0x5244F0;
    self->field4 = (void*)0x524560;
    self->field8 = (void*)0x5245D0;
}
