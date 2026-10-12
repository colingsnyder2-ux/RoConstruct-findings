// from server: 100% by king_originala
// roc 2008-06 0054e370  unit: RBX::RenderBase::Mesh  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054e370
//
// 0054e370  55                   push ebp
// 0054e371  8bec                 mov ebp, esp
// 0054e373  51                   push ecx
// 0054e374  894dfc               mov dword ptr [ebp - 4], ecx
// 0054e377  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054e37a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e37d  8b11                 mov edx, dword ptr [ecx]
// 0054e37f  8910                 mov dword ptr [eax], edx
// 0054e381  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054e384  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054e387  8b11                 mov edx, dword ptr [ecx]
// 0054e389  895004               mov dword ptr [eax + 4], edx
// 0054e38c  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054e38f  8be5                 mov esp, ebp
// 0054e391  5d                   pop ebp
// 0054e392  c20800               ret 8

#pragma optimize("", off)

struct S {
    int first;
    int second;
    S(const int& a, const int& b);
};

S::S(const int& a, const int& b) {
    first = a;
    second = b;
}
