// from server: 37% by colin
// roc 2007-08 006358b0  unit: MyXTPCommandBars  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006358b0
//
// 006358b0  0000                 add byte ptr [eax], al
// 006358b2  005368               add byte ptr [ebx + 0x68], dl
// 006358b5  c0527c00             rcl byte ptr [edx + 0x7c], 0
// 006358b9  56                   push esi
// 006358ba  e861fe0400           call 0x685720
// 006358bf  83c420               add esp, 0x20
// 006358c2  837e2400             cmp dword ptr [esi + 0x24], 0
// 006358c6  740a                 je 0x6358d2
// 006358c8  8b13                 mov edx, dword ptr [ebx]
// 006358ca  52                   push edx
// 006358cb  8bcf                 mov ecx, edi
// 006358cd  e88ec2ffff           call 0x631b60
// 006358d2  5f                   pop edi
// 006358d3  5e                   pop esi
// 006358d4  5d                   pop ebp
// 006358d5  5b                   pop ebx
// 006358d6  59                   pop ecx
// 006358d7  c20800               ret 8

extern "C" int __stdcall sub_00685720(int, int, int, int, int, int, int, int);
extern "C" int __stdcall sub_00631b60(int, int);

struct MyXTPCommandBars
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int method(int, int);
};

int MyXTPCommandBars::method(int a, int b)
{
    sub_00685720(0, 0, 0, 0, 0, 0, 0, 0);
    if (this->field_24 != 0)
    {
        int v = *(int*)this->field_0;
        sub_00631b60(v, 0);
    }
    return 0;
}
