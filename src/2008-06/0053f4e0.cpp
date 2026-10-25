// from server: 100% by king_originala
// roc 2008-06 0053f4e0  unit: RBX::RenderBase::AggregatingSceneManager  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053f4e0
//
// 0053f4e0  55                   push ebp
// 0053f4e1  8bec                 mov ebp, esp
// 0053f4e3  83ec34               sub esp, 0x34
// 0053f4e6  894dcc               mov dword ptr [ebp - 0x34], ecx
// 0053f4e9  8b4508               mov eax, dword ptr [ebp + 8]
// 0053f4ec  50                   push eax
// 0053f4ed  8d4df0               lea ecx, [ebp - 0x10]
// 0053f4f0  51                   push ecx
// 0053f4f1  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0053f4f4  83c10c               add ecx, 0xc
// 0053f4f7  e864110000           call 0x540660
// 0053f4fc  8b5004               mov edx, dword ptr [eax + 4]
// 0053f4ff  52                   push edx
// 0053f500  8b00                 mov eax, dword ptr [eax]
// 0053f502  50                   push eax
// 0053f503  8d4de8               lea ecx, [ebp - 0x18]
// 0053f506  51                   push ecx
// 0053f507  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0053f50a  83c10c               add ecx, 0xc
// 0053f50d  e81e110000           call 0x540630
// 0053f512  8b5004               mov edx, dword ptr [eax + 4]
// 0053f515  52                   push edx
// 0053f516  8b00                 mov eax, dword ptr [eax]
// 0053f518  50                   push eax
// 0053f519  8d4df8               lea ecx, [ebp - 8]
// 0053f51c  51                   push ecx
// 0053f51d  e81e680000           call 0x545d40
// 0053f522  83c418               add esp, 0x18
// 0053f525  8d55e0               lea edx, [ebp - 0x20]
// 0053f528  52                   push edx
// 0053f529  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0053f52c  83c10c               add ecx, 0xc
// 0053f52f  e82c110000           call 0x540660
// 0053f534  50                   push eax
// 0053f535  8d4df8               lea ecx, [ebp - 8]
// 0053f538  e8e3190000           call 0x540f20
// 0053f53d  0fb6c0               movzx eax, al
// 0053f540  85c0                 test eax, eax
// 0053f542  7429                 je 0x53f56d
// 0053f544  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0053f547  894dd8               mov dword ptr [ebp - 0x28], ecx
// 0053f54a  8b55fc               mov edx, dword ptr [ebp - 4]
// 0053f54d  8955dc               mov dword ptr [ebp - 0x24], edx
// 0053f550  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0053f553  50                   push eax
// 0053f554  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 0053f557  51                   push ecx
// 0053f558  8d55d0               lea edx, [ebp - 0x30]
// 0053f55b  52                   push edx
// 0053f55c  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0053f55f  83c10c               add ecx, 0xc
// 0053f562  e8a9110000           call 0x540710
// 0053f567  b001                 mov al, 1
// 0053f569  eb04                 jmp 0x53f56f
// 0053f56b  eb02                 jmp 0x53f56f
// 0053f56d  32c0                 xor al, al
// 0053f56f  8be5                 mov esp, ebp
// 0053f571  5d                   pop ebp
// 0053f572  c20400               ret 4

#pragma optimize("", off)

struct Iterator {
    int context;
    int* position;
    Iterator();
    bool operator!=(const Iterator& other) const;
};

struct Bucket {
    Iterator begin();
    Iterator end();
    Iterator erase(Iterator position);
};

extern Iterator __cdecl find(Iterator first, Iterator last, int* value);

struct S {
    char padding[12];
    Bucket bucket;
    bool f(int* value);
};

bool S::f(int* value)
{
    Iterator position = find(bucket.begin(), bucket.end(), value);
    if (position != bucket.end()) {
        bucket.erase(Iterator(position));
        return true;
    } else {
        return false;
    }
}
