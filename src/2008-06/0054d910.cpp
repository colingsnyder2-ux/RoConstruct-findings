// from server: 100% by king_originala
// roc 2008-06 0054d910  unit: RBX::RenderBase::Mesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d910
//
// 0054d910  55                   push ebp
// 0054d911  8bec                 mov ebp, esp
// 0054d913  51                   push ecx
// 0054d914  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d917  33c0                 xor eax, eax
// 0054d919  75fc                 jne 0x54d917
// 0054d91b  33c9                 xor ecx, ecx
// 0054d91d  75fc                 jne 0x54d91b
// 0054d91f  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d922  8b4204               mov eax, dword ptr [edx + 4]
// 0054d925  83e801               sub eax, 1
// 0054d928  6bc018               imul eax, eax, 0x18
// 0054d92b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d92e  0301                 add eax, dword ptr [ecx]
// 0054d930  8be5                 mov esp, ebp
// 0054d932  5d                   pop ebp
// 0054d933  c3                   ret 

struct Element {
    char data[24];
};

struct S {
    Element* data;
    int count;
    Element* f();
};

#pragma optimize("", off)
Element* S::f()
{
    do {} while (0);
    do {} while (0);
    return data + (count - 1);
}
#pragma optimize("", on)
