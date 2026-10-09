// from server: 91% by colin
// roc 2007-08 00671f00  unit: CPropertyGridItemBrickColor  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671f00
//
// 00671f00  56                   push esi
// 00671f01  57                   push edi
// 00671f02  8bf9                 mov edi, ecx
// 00671f04  837f4000             cmp dword ptr [edi + 0x40], 0
// 00671f08  750d                 jne 0x671f17
// 00671f0a  6804b77c00           push 0x7cb704
// 00671f0f  8d4f38               lea ecx, [edi + 0x38]
// 00671f12  e8f9feffff           call 0x671e10
// 00671f17  837f0c00             cmp dword ptr [edi + 0xc], 0
// 00671f1b  8d770c               lea esi, [edi + 0xc]
// 00671f1e  7510                 jne 0x671f30
// 00671f20  6a00                 push 0
// 00671f22  6810b77c00           push 0x7cb710
// 00671f27  56                   push esi
// 00671f28  8d4f38               lea ecx, [edi + 0x38]
// 00671f2b  e8e0f3ffff           call 0x671310
// 00671f30  8b36                 mov esi, dword ptr [esi]
// 00671f32  85f6                 test esi, esi
// 00671f34  7416                 je 0x671f4c
// 00671f36  8b442414             mov eax, dword ptr [esp + 0x14]
// 00671f3a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671f3e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00671f42  50                   push eax
// 00671f43  51                   push ecx
// 00671f44  52                   push edx
// 00671f45  ffd6                 call esi
// 00671f47  5f                   pop edi
// 00671f48  5e                   pop esi
// 00671f49  c20c00               ret 0xc
// 00671f4c  5f                   pop edi
// 00671f4d  b805400080           mov eax, 0x80004005
// 00671f52  5e                   pop esi
// 00671f53  c20c00               ret 0xc

struct CPropertyGridItemBrickColor
{
    char pad[0x0c];
    void* m_field0c;
    char pad2[0x28];
    void* m_field38;
    char pad3[0x04];
    void* m_field40;

    int Method(int a, int b, int c);
};

extern "C" void __fastcall sub_00671E10(void* p, const char* name);
extern "C" void __fastcall sub_00671310(void* p, void** out, const char* name, int flags);

int CPropertyGridItemBrickColor::Method(int a, int b, int c)
{
    if (m_field40 == 0)
    {
        sub_00671E10(&m_field38, (const char*)0x7cb704);
    }

    if (m_field0c == 0)
    {
        sub_00671310(&m_field38, &m_field0c, (const char*)0x7cb710, 0);
    }

    void* p = m_field0c;
    if (p != 0)
    {
        typedef int (__stdcall *Fn)(int, int, int);
        return ((Fn)p)(a, b, c);
    }

    return (int)0x80004005;
}
