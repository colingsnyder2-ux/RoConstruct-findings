// from server: 100% by king_originala
// roc 2008-06 00551c70  unit: RBX::TextureProxyBase  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00551c70
//
// 00551c70  55                   push ebp
// 00551c71  8bec                 mov ebp, esp
// 00551c73  51                   push ecx
// 00551c74  894dfc               mov dword ptr [ebp - 4], ecx
// 00551c77  8b45fc               mov eax, dword ptr [ebp - 4]
// 00551c7a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00551c7d  894828               mov dword ptr [eax + 0x28], ecx
// 00551c80  8be5                 mov esp, ebp
// 00551c82  5d                   pop ebp
// 00551c83  c20400               ret 4

#pragma optimize("", off)

struct S {
    char padding[0x28];
    int value;
    void setValue(int v);
};

void S::setValue(int v) {
    value = v;
}
