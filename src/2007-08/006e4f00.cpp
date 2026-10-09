// from server: 57% by colin
// roc 2007-08 006e4f00  unit: CXTPDockingPaneSplitterContainer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e4f00
//
// 006e4f00  51                   push ecx
// 006e4f01  57                   push edi
// 006e4f02  8d7920               lea edi, [ecx + 0x20]
// 006e4f05  8bcf                 mov ecx, edi
// 006e4f07  e85496f7ff           call 0x65e560
// 006e4f0c  85c0                 test eax, eax
// 006e4f0e  89442404             mov dword ptr [esp + 4], eax
// 006e4f12  743e                 je 0x6e4f52
// 006e4f14  53                   push ebx
// 006e4f15  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006e4f19  55                   push ebp
// 006e4f1a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006e4f1e  56                   push esi
// 006e4f1f  90                   nop 
// 006e4f20  8d442410             lea eax, [esp + 0x10]
// 006e4f24  50                   push eax
// 006e4f25  8bcf                 mov ecx, edi
// 006e4f27  e834ab0300           call 0x71fa60
// 006e4f2c  8bf0                 mov esi, eax
// 006e4f2e  395e18               cmp dword ptr [esi + 0x18], ebx
// 006e4f31  7515                 jne 0x6e4f48
// 006e4f33  8b16                 mov edx, dword ptr [esi]
// 006e4f35  8b4214               mov eax, dword ptr [edx + 0x14]
// 006e4f38  8bce                 mov ecx, esi
// 006e4f3a  ffd0                 call eax
// 006e4f3c  85c0                 test eax, eax
// 006e4f3e  7508                 jne 0x6e4f48
// 006e4f40  56                   push esi
// 006e4f41  8bcd                 mov ecx, ebp
// 006e4f43  e828f8ffff           call 0x6e4770
// 006e4f48  837c241000           cmp dword ptr [esp + 0x10], 0
// 006e4f4d  75d1                 jne 0x6e4f20
// 006e4f4f  5e                   pop esi
// 006e4f50  5d                   pop ebp
// 006e4f51  5b                   pop ebx
// 006e4f52  5f                   pop edi
// 006e4f53  59                   pop ecx
// 006e4f54  c20800               ret 8

struct CXTPDockingPaneSplitterContainer
{
    char pad[0x20];
    int m_list;

    int RemovePanes(int, int);
};

extern "C" int __stdcall sub_65E560(int);
extern "C" int __stdcall sub_71FA60(int, int*);
extern "C" int __stdcall sub_6E4770(int, int);

int CXTPDockingPaneSplitterContainer::RemovePanes(int a2, int a3)
{
    int result = sub_65E560((int)&m_list);
    if (result != 0)
    {
        int v;
        do
        {
            int item = sub_71FA60((int)&m_list, &v);
            if (*(int*)(item + 0x18) == a2)
            {
                int (*fn)(int) = *(int (**)(int))(*(int*)item + 0x14);
                if (fn(item) == 0)
                    sub_6E4770(a3, item);
            }
        } while (v != 0);
    }
    return result;
}
