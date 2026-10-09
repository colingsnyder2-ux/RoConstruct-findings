// from server: 49% by colin
// roc 2007-08 0061f630  unit: RBX::ScoreHud  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061f630
//
// 0061f630  53                   push ebx
// 0061f631  55                   push ebp
// 0061f632  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0061f636  85ed                 test ebp, ebp
// 0061f638  56                   push esi
// 0061f639  8bf1                 mov esi, ecx
// 0061f63b  7406                 je 0x61f643
// 0061f63d  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0061f641  7406                 je 0x61f649
// 0061f643  ff15d8e67700         call dword ptr [0x77e6d8]
// 0061f649  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0061f64d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061f651  3bd8                 cmp ebx, eax
// 0061f653  7425                 je 0x61f67a
// 0061f655  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061f658  57                   push edi
// 0061f659  53                   push ebx
// 0061f65a  51                   push ecx
// 0061f65b  50                   push eax
// 0061f65c  e87fecffff           call 0x61e2e0
// 0061f661  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061f665  52                   push edx
// 0061f666  8bf8                 mov edi, eax
// 0061f668  8b4608               mov eax, dword ptr [esi + 8]
// 0061f66b  56                   push esi
// 0061f66c  50                   push eax
// 0061f66d  57                   push edi
// 0061f66e  e88df0ffff           call 0x61e700
// 0061f673  83c41c               add esp, 0x1c
// 0061f676  897e08               mov dword ptr [esi + 8], edi
// 0061f679  5f                   pop edi
// 0061f67a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061f67e  5e                   pop esi
// 0061f67f  8928                 mov dword ptr [eax], ebp
// 0061f681  5d                   pop ebp
// 0061f682  895804               mov dword ptr [eax + 4], ebx
// 0061f685  5b                   pop ebx
// 0061f686  c21400               ret 0x14

extern "C" void __stdcall invalid_parameter_noinfo();

struct ScoreHud
{
    char pad0[8];
    void* field8;
    void assign(void* first, void* last, void* result);
};

void ScoreHud::assign(void* first, void* last, void* result)
{
    if (first != 0 && first != last)
    {
        invalid_parameter_noinfo();
    }

    if (last != result)
    {
        void* tmp = (void*)0x61e2e0;
        void* newFirst = ((void* (__cdecl*)(void*, void*, void*))tmp)(field8, last, result);
        void* tmp2 = (void*)0x61e700;
        ((void (__cdecl*)(void*, void*, void*, void*))tmp2)(newFirst, field8, last, result);
        field8 = newFirst;
    }

    *(void**)first = 0;
    *(void**)((char*)first + 4) = last;
}
