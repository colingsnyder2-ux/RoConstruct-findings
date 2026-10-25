// from server: 100% by king_originala
// roc 2008-06 0054ae50  unit: RBX::RenderBase::Mesh  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ae50
//
// 0054ae50  55                   push ebp
// 0054ae51  8bec                 mov ebp, esp
// 0054ae53  83ec08               sub esp, 8
// 0054ae56  894df8               mov dword ptr [ebp - 8], ecx
// 0054ae59  33c0                 xor eax, eax
// 0054ae5b  75fc                 jne 0x54ae59
// 0054ae5d  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054ae60  8b5104               mov edx, dword ptr [ecx + 4]
// 0054ae63  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054ae66  8b08                 mov ecx, dword ptr [eax]
// 0054ae68  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 0054ae6c  8955fc               mov dword ptr [ebp - 4], edx
// 0054ae6f  0fb64508             movzx eax, byte ptr [ebp + 8]
// 0054ae73  50                   push eax
// 0054ae74  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054ae77  8b5104               mov edx, dword ptr [ecx + 4]
// 0054ae7a  83ea01               sub edx, 1
// 0054ae7d  52                   push edx
// 0054ae7e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054ae81  e89a51f3ff           call 0x480020
// 0054ae86  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054ae89  8be5                 mov esp, ebp
// 0054ae8b  5d                   pop ebp
// 0054ae8c  c20400               ret 4

struct S {
    int* data;
    int count;

    int f(unsigned char flag);
    void remove(int index, unsigned char flag);
};

#pragma optimize("", off)
int S::f(unsigned char flag)
{
    do {
    } while (0);

    int result = data[count - 1];
    remove(count - 1, flag);
    return result;
}
#pragma optimize("", on)
