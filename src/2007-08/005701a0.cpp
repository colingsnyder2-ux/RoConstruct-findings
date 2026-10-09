// from server: 97% by colin
// roc 2007-08 005701a0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005701a0
//
// 005701a0  53                   push ebx
// 005701a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005701a5  57                   push edi
// 005701a6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005701aa  2bfb                 sub edi, ebx
// 005701ac  c1ff02               sar edi, 2
// 005701af  85ff                 test edi, edi
// 005701b1  7e3f                 jle 0x5701f2
// 005701b3  55                   push ebp
// 005701b4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005701b8  56                   push esi
// 005701b9  8da42400000000       lea esp, [esp]
// 005701c0  8bc7                 mov eax, edi
// 005701c2  99                   cdq 
// 005701c3  2bc2                 sub eax, edx
// 005701c5  8bf0                 mov esi, eax
// 005701c7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005701cb  8b08                 mov ecx, dword ptr [eax]
// 005701cd  d1fe                 sar esi, 1
// 005701cf  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 005701d2  51                   push ecx
// 005701d3  52                   push edx
// 005701d4  ffd5                 call ebp
// 005701d6  83c408               add esp, 8
// 005701d9  84c0                 test al, al
// 005701db  740d                 je 0x5701ea
// 005701dd  83c8ff               or eax, 0xffffffff
// 005701e0  2bc6                 sub eax, esi
// 005701e2  8d5cb304             lea ebx, [ebx + esi*4 + 4]
// 005701e6  03f8                 add edi, eax
// 005701e8  eb02                 jmp 0x5701ec
// 005701ea  8bfe                 mov edi, esi
// 005701ec  85ff                 test edi, edi
// 005701ee  7fd0                 jg 0x5701c0
// 005701f0  5e                   pop esi
// 005701f1  5d                   pop ebp
// 005701f2  5f                   pop edi
// 005701f3  8bc3                 mov eax, ebx
// 005701f5  5b                   pop ebx
// 005701f6  c3                   ret 

struct S {
    int f(int* first, int* last, int* value, bool (*pred)(int, int));
};

int S::f(int* first, int* last, int* value, bool (*pred)(int, int))
{
    int count = (int)(last - first);
    if (count > 0) {
        while (count > 0) {
            int half = count / 2;
            if (pred(first[half], *value)) {
                first += half + 1;
                count -= half + 1;
            } else {
                count = half;
            }
        }
    }
    return (int)first;
}
