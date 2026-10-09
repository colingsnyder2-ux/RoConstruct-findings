// from server: 86% by colin
// roc 2007-08 004447b0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004447b0
//
// 004447b0  8b442404             mov eax, dword ptr [esp + 4]
// 004447b4  85c0                 test eax, eax
// 004447b6  53                   push ebx
// 004447b7  56                   push esi
// 004447b8  57                   push edi
// 004447b9  8bf1                 mov esi, ecx
// 004447bb  7405                 je 0x4447c2
// 004447bd  8d78fc               lea edi, [eax - 4]
// 004447c0  eb02                 jmp 0x4447c4
// 004447c2  33ff                 xor edi, edi
// 004447c4  8b4608               mov eax, dword ptr [esi + 8]
// 004447c7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004447cb  03c7                 add eax, edi
// 004447cd  53                   push ebx
// 004447ce  50                   push eax
// 004447cf  ff1530e67700         call dword ptr [0x77e630]
// 004447d5  83c408               add esp, 8
// 004447d8  84c0                 test al, al
// 004447da  7429                 je 0x444805
// 004447dc  8b4e08               mov ecx, dword ptr [esi + 8]
// 004447df  53                   push ebx
// 004447e0  03cf                 add ecx, edi
// 004447e2  ff1590e67700         call dword ptr [0x77e690]
// 004447e8  8b4610               mov eax, dword ptr [esi + 0x10]
// 004447eb  85c0                 test eax, eax
// 004447ed  740b                 je 0x4447fa
// 004447ef  8b4e04               mov ecx, dword ptr [esi + 4]
// 004447f2  51                   push ecx
// 004447f3  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004447f6  03cf                 add ecx, edi
// 004447f8  ffd0                 call eax
// 004447fa  8b5604               mov edx, dword ptr [esi + 4]
// 004447fd  52                   push edx
// 004447fe  8bcf                 mov ecx, edi
// 00444800  e80bffffff           call 0x444710
// 00444805  5f                   pop edi
// 00444806  5e                   pop esi
// 00444807  5b                   pop ebx
// 00444808  c20800               ret 8

struct BoundPropGetSet {
    char pad0[4];
    int desc;
    int member;
    int changed;
    void setValue(void* object, const void* value);
};

extern "C" bool __cdecl std_string_neq(const void*, const void*);
extern "C" void __cdecl std_string_assign(void*, const void*);
extern "C" void __cdecl raisePropertyChanged(int, int);

void BoundPropGetSet::setValue(void* object, const void* value)
{
    int base;
    if (object)
        base = (int)object - 4;
    else
        base = 0;

    int m = *(int*)((char*)this + 8) + base;
    if (std_string_neq((void*)m, value))
    {
        std_string_assign((void*)(*(int*)((char*)this + 8) + base), value);
        int ch = *(int*)((char*)this + 0x10);
        if (ch)
        {
            int d = *(int*)((char*)this + 4);
            int c = *(int*)((char*)this + 0x14) + base;
            ((void (__thiscall*)(int, int))ch)(c, d);
        }
        raisePropertyChanged(*(int*)((char*)this + 4), base);
    }
}
