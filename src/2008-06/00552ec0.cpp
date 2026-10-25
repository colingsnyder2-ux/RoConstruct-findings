// from server: 100% by king_originala
// roc 2008-06 00552ec0  unit: RBX::RenderBase::AggregateChunk  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552ec0
//
// 00552ec0  55                   push ebp
// 00552ec1  8bec                 mov ebp, esp
// 00552ec3  51                   push ecx
// 00552ec4  894dfc               mov dword ptr [ebp - 4], ecx
// 00552ec7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552eca  e801010000           call 0x552fd0
// 00552ecf  0fb6c0               movzx eax, al
// 00552ed2  85c0                 test eax, eax
// 00552ed4  7528                 jne 0x552efe
// 00552ed6  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552ed9  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00552edc  52                   push edx
// 00552edd  8b45fc               mov eax, dword ptr [ebp - 4]
// 00552ee0  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00552ee3  83e904               sub ecx, 4
// 00552ee6  51                   push ecx
// 00552ee7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552eea  e8c138ffff           call 0x5467b0
// 00552eef  8b55fc               mov edx, dword ptr [ebp - 4]
// 00552ef2  8b4210               mov eax, dword ptr [edx + 0x10]
// 00552ef5  83e804               sub eax, 4
// 00552ef8  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552efb  894110               mov dword ptr [ecx + 0x10], eax
// 00552efe  8be5                 mov esp, ebp
// 00552f00  5d                   pop ebp
// 00552f01  c3                   ret 

struct S {
    char padding[16];
    int* finish;

    bool empty();
    void destroy(int* first, int* last);
    void pop_back();
};

#pragma optimize("", off)
void S::pop_back()
{
    if (!empty()) {
        destroy(finish - 1, finish);
        --finish;
    }
}
