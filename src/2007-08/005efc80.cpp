// from server: 76% by colin
// roc 2007-08 005efc80  unit: RBX::VHint::?$FactoryProduct  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005efc80
//
// 005efc80  56                   push esi
// 005efc81  8bf1                 mov esi, ecx
// 005efc83  837e2400             cmp dword ptr [esi + 0x24], 0
// 005efc87  7642                 jbe 0x5efccb
// 005efc89  8b46d4               mov eax, dword ptr [esi - 0x2c]
// 005efc8c  6a00                 push 0
// 005efc8e  68c8e18800           push 0x88e1c8
// 005efc93  684c1f8800           push 0x881f4c
// 005efc98  6a00                 push 0
// 005efc9a  50                   push eax
// 005efc9b  e896100400           call 0x630d36
// 005efca0  83c414               add esp, 0x14
// 005efca3  85c0                 test eax, eax
// 005efca5  7514                 jne 0x5efcbb
// 005efca7  8b442408             mov eax, dword ptr [esp + 8]
// 005efcab  50                   push eax
// 005efcac  8d8e18ffffff         lea ecx, [esi - 0xe8]
// 005efcb2  e889fdffff           call 0x5efa40
// 005efcb7  5e                   pop esi
// 005efcb8  c20400               ret 4
// 005efcbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005efcbf  51                   push ecx
// 005efcc0  8d8e18ffffff         lea ecx, [esi - 0xe8]
// 005efcc6  e885feffff           call 0x5efb50
// 005efccb  5e                   pop esi
// 005efccc  c20400               ret 4

struct VHint {
    void sub_5efa40(int);
    void sub_5efb50(int);
    void f(int);
};

extern "C" int __stdcall sub_630d36(int, int, int, int, int);

void VHint::f(int a)
{
    if (*(unsigned int*)((char*)this + 0x24) > 0)
    {
        int v = *(int*)((char*)this - 0x2c);
        int r = sub_630d36(v, 0, 0x881f4c, 0x88e1c8, 0);
        if (r == 0)
        {
            sub_5efa40(a);
            return;
        }
        sub_5efb50(a);
    }
}
