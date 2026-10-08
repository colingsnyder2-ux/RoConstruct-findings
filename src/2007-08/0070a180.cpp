// from server: 56% by colin
// roc 2007-08 0070a180  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070a180
//
// 0070a180  8b442404             mov eax, dword ptr [esp + 4]
// 0070a184  83f8ff               cmp eax, -1
// 0070a187  56                   push esi
// 0070a188  8bf1                 mov esi, ecx
// 0070a18a  7421                 je 0x70a1ad
// 0070a18c  50                   push eax
// 0070a18d  8d4e7c               lea ecx, [esi + 0x7c]
// 0070a190  e86b6e0000           call 0x711000
// 0070a195  8b4008               mov eax, dword ptr [eax + 8]
// 0070a198  85c0                 test eax, eax
// 0070a19a  7411                 je 0x70a1ad
// 0070a19c  8b4014               mov eax, dword ptr [eax + 0x14]
// 0070a19f  8b4804               mov ecx, dword ptr [eax + 4]
// 0070a1a2  8b10                 mov edx, dword ptr [eax]
// 0070a1a4  51                   push ecx
// 0070a1a5  52                   push edx
// 0070a1a6  8bce                 mov ecx, esi
// 0070a1a8  e8a3fdffff           call 0x709f50
// 0070a1ad  5e                   pop esi
// 0070a1ae  c20400               ret 4

struct CXTColorHex
{
    char pad[0x7c];
    void* list;
    void SetColor(unsigned int color);
    void* Find(unsigned int idx);
};

void* CXTColorHex_Find(void* list, unsigned int idx);

void CXTColorHex::SetColor(unsigned int color)
{
    if (color == 0xffffffff)
        return;
    void* node = CXTColorHex_Find((char*)this + 0x7c, color);
    void* item = *(void**)((char*)node + 8);
    if (item == 0)
        return;
    unsigned int* p = *(unsigned int**)((char*)item + 0x14);
    SetColor(p[0]);
}
