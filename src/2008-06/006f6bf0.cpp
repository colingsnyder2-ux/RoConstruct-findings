// roc 2008-06 006f6bf0  unit: CXTPControlSelector  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6bf0
//
// 006f6bf0  8b442404             mov eax, dword ptr [esp + 4]
// 006f6bf4  85c0                 test eax, eax
// 006f6bf6  7425                 je 0x6f6c1d
// 006f6bf8  83f8ff               cmp eax, -1
// 006f6bfb  7420                 je 0x6f6c1d
// 006f6bfd  8a08                 mov cl, byte ptr [eax]
// 006f6bff  8bd0                 mov edx, eax
// 006f6c01  84c9                 test cl, cl
// 006f6c03  7415                 je 0x6f6c1a
// 006f6c05  80f926               cmp cl, 0x26
// 006f6c08  7505                 jne 0x6f6c0f
// 006f6c0a  384801               cmp byte ptr [eax + 1], cl
// 006f6c0d  7503                 jne 0x6f6c12
// 006f6c0f  880a                 mov byte ptr [edx], cl
// 006f6c11  42                   inc edx
// 006f6c12  8a4801               mov cl, byte ptr [eax + 1]
// 006f6c15  40                   inc eax
// 006f6c16  84c9                 test cl, cl
// 006f6c18  75eb                 jne 0x6f6c05
// 006f6c1a  c60200               mov byte ptr [edx], 0
// 006f6c1d  c3                   ret 
// copied from an identical function in another client (function ?strip_ampersands@ns_ROCX000054@@YAPADPAD@Z)

namespace ns_ROCX000054 {
char* __cdecl strip_ampersands(char* p)
{
    if (p != 0 && p != (char*)-1)
    {
        char* d = p;
        char c = *p;
        if (c != 0)
        {
            do
            {
                if (c != '&' || p[1] == c)
                {
                    *d = c;
                    d++;
                }
                c = p[1];
                p++;
            } while (c != 0);
        }
        *d = 0;
    }
    return p;
}
}
