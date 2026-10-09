// from server: 43% by colin
// roc 2007-08 005f2850  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2850
//
// 005f2850  6aff                 push -1
// 005f2852  681bb67500           push 0x75b61b
// 005f2857  64a100000000         mov eax, dword ptr fs:[0]
// 005f285d  50                   push eax
// 005f285e  64892500000000       mov dword ptr fs:[0], esp
// 005f2865  51                   push ecx
// 005f2866  56                   push esi
// 005f2867  6a10                 push 0x10
// 005f2869  8bf1                 mov esi, ecx
// 005f286b  e886d60300           call 0x62fef6
// 005f2870  83c404               add esp, 4
// 005f2873  89442404             mov dword ptr [esp + 4], eax
// 005f2877  85c0                 test eax, eax
// 005f2879  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f2881  740e                 je 0x5f2891
// 005f2883  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f2887  51                   push ecx
// 005f2888  8bc8                 mov ecx, eax
// 005f288a  e8e1feffff           call 0x5f2770
// 005f288f  eb02                 jmp 0x5f2893
// 005f2891  33c0                 xor eax, eax
// 005f2893  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2897  8906                 mov dword ptr [esi], eax
// 005f2899  8bc6                 mov eax, esi
// 005f289b  5e                   pop esi
// 005f289c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f28a3  83c410               add esp, 0x10
// 005f28a6  c20400               ret 4

extern "C" void* __cdecl operator_new(unsigned int size);

struct BrickColor {
    int number;
    BrickColor(int value);
};

BrickColor::BrickColor(int value)
{
    BrickColor* p = (BrickColor*)operator_new(0x10);
    if (p != 0) {
        p->number = value;
    }
    this->number = (int)p;
}
