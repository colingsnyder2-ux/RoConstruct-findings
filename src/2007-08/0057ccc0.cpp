// from server: 50% by colin
// roc 2007-08 0057ccc0  unit: RBX::Workspace  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ccc0
//
// 0057ccc0  51                   push ecx
// 0057ccc1  56                   push esi
// 0057ccc2  8bf1                 mov esi, ecx
// 0057ccc4  e8a734fbff           call 0x530170
// 0057ccc9  c644240400           mov byte ptr [esp + 4], 0
// 0057ccce  8b442404             mov eax, dword ptr [esp + 4]
// 0057ccd2  50                   push eax
// 0057ccd3  8d8ed4020000         lea ecx, [esi + 0x2d4]
// 0057ccd9  e882befdff           call 0x558b60
// 0057ccde  5e                   pop esi
// 0057ccdf  59                   pop ecx
// 0057cce0  c3                   ret 

struct Workspace {
    char pad[0x2d4];
    void sub_00558b60(char);
    void sub_00530170();
    void func_0057ccc0();
};

void Workspace::func_0057ccc0()
{
    sub_00530170();
    char b = 0;
    sub_00558b60(b);
}
