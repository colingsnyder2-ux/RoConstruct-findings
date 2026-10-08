// from server: 71% by colin
// roc 2007-08 00692000  unit: CXTThemeManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692000
//
// 00692000  56                   push esi
// 00692001  8bf1                 mov esi, ecx
// 00692003  8b4e04               mov ecx, dword ptr [esi + 4]
// 00692006  85c9                 test ecx, ecx
// 00692008  c70698087d00         mov dword ptr [esi], 0x7d0898
// 0069200e  740f                 je 0x69201f
// 00692010  8b01                 mov eax, dword ptr [ecx]
// 00692012  8b10                 mov edx, dword ptr [eax]
// 00692014  6a01                 push 1
// 00692016  ffd2                 call edx
// 00692018  c7460400000000       mov dword ptr [esi + 4], 0
// 0069201f  e87cffffff           call 0x691fa0
// 00692024  83c024               add eax, 0x24
// 00692027  56                   push esi
// 00692028  8bc8                 mov ecx, eax
// 0069202a  e8036b0a00           call 0x738b32
// 0069202f  c7460800000000       mov dword ptr [esi + 8], 0
// 00692036  5e                   pop esi
// 00692037  c3                   ret 

struct CXTThemeManager {
    void* vtable;
    void* field_4;
    void* field_8;
    void Destroy();
};

extern "C" void* __cdecl sub_691FA0();
extern "C" void __cdecl sub_738B32(void*);

void CXTThemeManager::Destroy()
{
    if (field_4 != 0) {
        void** vt = *(void***)field_4;
        ((void (__thiscall*)(void*, int))vt[0])(field_4, 1);
        field_4 = 0;
    }
    void* p = sub_691FA0();
    sub_738B32((char*)p + 0x24);
    field_8 = 0;
}
