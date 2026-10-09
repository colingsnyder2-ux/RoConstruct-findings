// from server: 49% by colin
// roc 2007-08 00560380  unit: RBX::VModelInstance::?$FilteredSelection  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00560380
//
// 00560380  53                   push ebx
// 00560381  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00560385  55                   push ebp
// 00560386  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0056038a  56                   push esi
// 0056038b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056038f  57                   push edi
// 00560390  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00560394  3bf7                 cmp esi, edi
// 00560396  7433                 je 0x5603cb
// 00560398  8b06                 mov eax, dword ptr [esi]
// 0056039a  83ec08               sub esp, 8
// 0056039d  8bcc                 mov ecx, esp
// 0056039f  8901                 mov dword ptr [ecx], eax
// 005603a1  8b4604               mov eax, dword ptr [esi + 4]
// 005603a4  85c0                 test eax, eax
// 005603a6  89642420             mov dword ptr [esp + 0x20], esp
// 005603aa  894104               mov dword ptr [ecx + 4], eax
// 005603ad  740c                 je 0x5603bb
// 005603af  83c004               add eax, 4
// 005603b2  b901000000           mov ecx, 1
// 005603b7  f00fc108             lock xadd dword ptr [eax], ecx
// 005603bb  53                   push ebx
// 005603bc  55                   push ebp
// 005603bd  ff542438             call dword ptr [esp + 0x38]
// 005603c1  83c608               add esi, 8
// 005603c4  83c410               add esp, 0x10
// 005603c7  3bf7                 cmp esi, edi
// 005603c9  75cd                 jne 0x560398
// 005603cb  8b442414             mov eax, dword ptr [esp + 0x14]
// 005603cf  8b542428             mov edx, dword ptr [esp + 0x28]
// 005603d3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005603d7  5f                   pop edi
// 005603d8  8910                 mov dword ptr [eax], edx
// 005603da  896804               mov dword ptr [eax + 4], ebp
// 005603dd  5e                   pop esi
// 005603de  895808               mov dword ptr [eax + 8], ebx
// 005603e1  5d                   pop ebp
// 005603e2  89480c               mov dword ptr [eax + 0xc], ecx
// 005603e5  5b                   pop ebx
// 005603e6  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FilteredSelection
{
    void for_each_helper(int a, int b, int c, int d, int e, int f);
};

void FilteredSelection::for_each_helper(int a, int b, int c, int d, int e, int f)
{
    int* begin = (int*)a;
    int* end = (int*)b;
    while (begin != end)
    {
        int v0 = begin[0];
        int v1 = begin[1];
        int local[2];
        local[0] = v0;
        local[1] = v1;
        if (v1 != 0)
        {
            _InterlockedExchangeAdd((volatile long*)(v1 + 4), 1);
        }
        ((void (__stdcall*)(int, int, int*, int, int))f)(c, d, local, e, 0);
        begin += 2;
    }
    int* out = (int*)e;
    out[0] = c;
    out[1] = d;
    out[2] = a;
    out[3] = b;
}
