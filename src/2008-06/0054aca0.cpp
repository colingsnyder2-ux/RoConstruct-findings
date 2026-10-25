// from server: 100% by king_originala
// roc 2008-06 0054aca0  unit: RBX::RenderBase::Mesh  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054aca0
//
// 0054aca0  55                   push ebp
// 0054aca1  8bec                 mov ebp, esp
// 0054aca3  83ec08               sub esp, 8
// 0054aca6  894dfc               mov dword ptr [ebp - 4], ecx
// 0054aca9  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054acac  83c10c               add ecx, 0xc
// 0054acaf  e8bc120000           call 0x54bf70
// 0054acb4  83e801               sub eax, 1
// 0054acb7  50                   push eax
// 0054acb8  6a00                 push 0
// 0054acba  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054acbd  83c10c               add ecx, 0xc
// 0054acc0  e8ab120000           call 0x54bf70
// 0054acc5  8945f8               mov dword ptr [ebp - 8], eax
// 0054acc8  db45f8               fild dword ptr [ebp - 8]
// 0054accb  dc4d08               fmul qword ptr [ebp + 8]
// 0054acce  e81d6b1500           call 0x6a17f0
// 0054acd3  50                   push eax
// 0054acd4  e8374ff2ff           call 0x46fc10
// 0054acd9  83c40c               add esp, 0xc
// 0054acdc  8be5                 mov esp, ebp
// 0054acde  5d                   pop ebp
// 0054acdf  c20800               ret 8

#pragma optimize("", off)

extern int __cdecl clampValue(int value, int minimum, int maximum);

struct Values {
    int size();
};

struct Mesh {
    char padding[12];
    Values values;
    int index(double fraction);
};

int Mesh::index(double fraction)
{
    return clampValue((int)(values.size() * fraction), 0, values.size() - 1);
}
