// from server: 93% by colin
// roc 2007-08 005d64e0  unit: RBX::UnifiedImageWidget  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d64e0
//
// 005d64e0  56                   push esi
// 005d64e1  8b742408             mov esi, dword ptr [esp + 8]
// 005d64e5  56                   push esi
// 005d64e6  81c100010000         add ecx, 0x100
// 005d64ec  e8dfa50200           call 0x600ad0
// 005d64f1  8bc6                 mov eax, esi
// 005d64f3  5e                   pop esi
// 005d64f4  c20400               ret 4

struct UnifiedImageWidget {
    char pad[0x100];
    int setImageName(const char* name);
};

extern "C" int __stdcall sub_600AD0(void* self, const char* name);

int UnifiedImageWidget::setImageName(const char* name)
{
    sub_600AD0((char*)this + 0x100, name);
    return (int)name;
}
