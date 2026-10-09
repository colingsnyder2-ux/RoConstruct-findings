// roc 2009-12 0084a390  unit: CXTPControlSelector  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a390
//
// 0084a390  8b442404             mov eax, dword ptr [esp + 4]
// 0084a394  85c0                 test eax, eax
// 0084a396  7425                 je 0x84a3bd
// 0084a398  83f8ff               cmp eax, -1
// 0084a39b  7420                 je 0x84a3bd
// 0084a39d  8a08                 mov cl, byte ptr [eax]
// 0084a39f  8bd0                 mov edx, eax
// 0084a3a1  84c9                 test cl, cl
// 0084a3a3  7415                 je 0x84a3ba
// 0084a3a5  80f926               cmp cl, 0x26
// 0084a3a8  7505                 jne 0x84a3af
// 0084a3aa  384801               cmp byte ptr [eax + 1], cl
// 0084a3ad  7503                 jne 0x84a3b2
// 0084a3af  880a                 mov byte ptr [edx], cl
// 0084a3b1  42                   inc edx
// 0084a3b2  8a4801               mov cl, byte ptr [eax + 1]
// 0084a3b5  40                   inc eax
// 0084a3b6  84c9                 test cl, cl
// 0084a3b8  75eb                 jne 0x84a3a5
// 0084a3ba  c60200               mov byte ptr [edx], 0
// 0084a3bd  c3                   ret 
// copied from an identical function in another client (function ?strip_ampersands@ns_ROCX00001f@@YAPADPAD@Z)

namespace ns_ROCX00001f {
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
