// from server: 70% by colin
// roc 2007-08 00567930  unit: TextXmlParser  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567930
//
// 00567930  56                   push esi
// 00567931  57                   push edi
// 00567932  8bf9                 mov edi, ecx
// 00567934  8d7704               lea esi, [edi + 4]
// 00567937  8bce                 mov ecx, esi
// 00567939  c707f0977a00         mov dword ptr [edi], 0x7a97f0
// 0056793f  e8dcd40900           call 0x604e20
// 00567944  894604               mov dword ptr [esi + 4], eax
// 00567947  c6401901             mov byte ptr [eax + 0x19], 1
// 0056794b  8b4604               mov eax, dword ptr [esi + 4]
// 0056794e  894004               mov dword ptr [eax + 4], eax
// 00567951  8b4604               mov eax, dword ptr [esi + 4]
// 00567954  8900                 mov dword ptr [eax], eax
// 00567956  8b4604               mov eax, dword ptr [esi + 4]
// 00567959  894008               mov dword ptr [eax + 8], eax
// 0056795c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00567960  c7460800000000       mov dword ptr [esi + 8], 0
// 00567967  894710               mov dword ptr [edi + 0x10], eax
// 0056796a  8bc7                 mov eax, edi
// 0056796c  5f                   pop edi
// 0056796d  5e                   pop esi
// 0056796e  c20400               ret 4

struct XmlParser {
    void* buffer;
    XmlParser(void* b);
};

struct TextXmlParser : XmlParser {
    void* legacyHashes;
    void* field_0C;
    void* field_10;
    TextXmlParser(void* buffer);
};

extern "C" void* __stdcall sub_00604e20();

TextXmlParser::TextXmlParser(void* buffer)
    : XmlParser(buffer)
{
    void* node = sub_00604e20();
    *(void**)((char*)this + 8) = node;
    *(char*)((char*)node + 0x19) = 1;
    void* n = *(void**)((char*)this + 8);
    *(void**)((char*)n + 4) = n;
    n = *(void**)((char*)this + 8);
    *(void**)n = n;
    n = *(void**)((char*)this + 8);
    *(void**)((char*)n + 8) = n;
    *(void**)((char*)this + 0x0C) = 0;
    *(void**)((char*)this + 0x10) = buffer;
}
