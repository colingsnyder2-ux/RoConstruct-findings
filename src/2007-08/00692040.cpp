// from server: 96% by colin
// roc 2007-08 00692040  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692040
//
// 00692040  56                   push esi
// 00692041  8bf1                 mov esi, ecx
// 00692043  837e0400             cmp dword ptr [esi + 4], 0
// 00692047  7524                 jne 0x69206d
// 00692049  57                   push edi
// 0069204a  8b3e                 mov edi, dword ptr [esi]
// 0069204c  e84fffffff           call 0x691fa0
// 00692051  8b4020               mov eax, dword ptr [eax + 0x20]
// 00692054  8b5714               mov edx, dword ptr [edi + 0x14]
// 00692057  50                   push eax
// 00692058  8bce                 mov ecx, esi
// 0069205a  ffd2                 call edx
// 0069205c  894604               mov dword ptr [esi + 4], eax
// 0069205f  897004               mov dword ptr [eax + 4], esi
// 00692062  8b4e04               mov ecx, dword ptr [esi + 4]
// 00692065  8b01                 mov eax, dword ptr [ecx]
// 00692067  8b5004               mov edx, dword ptr [eax + 4]
// 0069206a  ffd2                 call edx
// 0069206c  5f                   pop edi
// 0069206d  8b4604               mov eax, dword ptr [esi + 4]
// 00692070  5e                   pop esi
// 00692071  c3                   ret 

struct CXTThemeManager {
    void* field0;
    void* field4;
    void* getTheme();
};

extern "C" void* __cdecl sub_691FA0();

void* CXTThemeManager::getTheme()
{
    if (field4 == 0)
    {
        void* p = field0;
        void* q = sub_691FA0();
        void* arg = *(void**)((char*)q + 0x20);
        void* (__thiscall *fn)(void*, void*) = *(void* (__thiscall**)(void*, void*))((char*)p + 0x14);
        void* edx = fn;
        field4 = ((void* (__thiscall*)(void*, void*))edx)(this, arg);
        *(void**)((char*)field4 + 4) = this;
        void* ecx = field4;
        void* eax = *(void**)ecx;
        void* (__thiscall *fn2)(void*) = *(void* (__thiscall**)(void*))((char*)eax + 4);
        fn2(ecx);
    }
    return field4;
}
