// from server: 100% by king_originala
// roc 2008-06 0054ad70  unit: RBX::RenderBase::Mesh  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ad70
//
// 0054ad70  55                   push ebp
// 0054ad71  8bec                 mov ebp, esp
// 0054ad73  83ec10               sub esp, 0x10
// 0054ad76  894df4               mov dword ptr [ebp - 0xc], ecx
// 0054ad79  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054ad7c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054ad7f  8b5004               mov edx, dword ptr [eax + 4]
// 0054ad82  3b5108               cmp edx, dword ptr [ecx + 8]
// 0054ad85  7d4c                 jge 0x54add3
// 0054ad87  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054ad8a  8b4804               mov ecx, dword ptr [eax + 4]
// 0054ad8d  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 0054ad90  8b02                 mov eax, dword ptr [edx]
// 0054ad92  8d0c88               lea ecx, [eax + ecx*4]
// 0054ad95  51                   push ecx
// 0054ad96  6a04                 push 4
// 0054ad98  e8d368ebff           call 0x401670
// 0054ad9d  83c408               add esp, 8
// 0054ada0  8945f8               mov dword ptr [ebp - 8], eax
// 0054ada3  837df800             cmp dword ptr [ebp - 8], 0
// 0054ada7  7412                 je 0x54adbb
// 0054ada9  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054adac  8b4508               mov eax, dword ptr [ebp + 8]
// 0054adaf  8b08                 mov ecx, dword ptr [eax]
// 0054adb1  890a                 mov dword ptr [edx], ecx
// 0054adb3  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054adb6  8955f0               mov dword ptr [ebp - 0x10], edx
// 0054adb9  eb07                 jmp 0x54adc2
// 0054adbb  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 0054adc2  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054adc5  8b4804               mov ecx, dword ptr [eax + 4]
// 0054adc8  83c101               add ecx, 1
// 0054adcb  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 0054adce  894a04               mov dword ptr [edx + 4], ecx
// 0054add1  eb51                 jmp 0x54ae24
// 0054add3  8b4508               mov eax, dword ptr [ebp + 8]
// 0054add6  50                   push eax
// 0054add7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054adda  e83148f3ff           call 0x47f610
// 0054addf  0fb6c8               movzx ecx, al
// 0054ade2  85c9                 test ecx, ecx
// 0054ade4  7416                 je 0x54adfc
// 0054ade6  8b5508               mov edx, dword ptr [ebp + 8]
// 0054ade9  8b02                 mov eax, dword ptr [edx]
// 0054adeb  8945fc               mov dword ptr [ebp - 4], eax
// 0054adee  8d4dfc               lea ecx, [ebp - 4]
// 0054adf1  51                   push ecx
// 0054adf2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054adf5  e876ffffff           call 0x54ad70
// 0054adfa  eb28                 jmp 0x54ae24
// 0054adfc  6a00                 push 0
// 0054adfe  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 0054ae01  8b4204               mov eax, dword ptr [edx + 4]
// 0054ae04  83c001               add eax, 1
// 0054ae07  50                   push eax
// 0054ae08  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054ae0b  e81052f3ff           call 0x480020
// 0054ae10  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054ae13  8b5104               mov edx, dword ptr [ecx + 4]
// 0054ae16  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054ae19  8b08                 mov ecx, dword ptr [eax]
// 0054ae1b  8b4508               mov eax, dword ptr [ebp + 8]
// 0054ae1e  8b00                 mov eax, dword ptr [eax]
// 0054ae20  894491fc             mov dword ptr [ecx + edx*4 - 4], eax
// 0054ae24  8be5                 mov esp, ebp
// 0054ae26  5d                   pop ebp
// 0054ae27  c20400               ret 4

#pragma optimize("", off)

void* __cdecl operator new(unsigned int, void*);

struct Mesh {
    int* data;
    int size;
    int capacity;

    bool contains(const int* value);
    void resize(int count, bool flag);
    void append(const int& value);
};

void Mesh::append(const int& value)
{
    if (size < capacity) {
        new (data + size) int(value);
        ++size;
    } else {
        if (contains(&value)) {
            int copy = value;
            append(copy);
        } else {
            resize(size + 1, false);
            data[size - 1] = value;
        }
    }
}
