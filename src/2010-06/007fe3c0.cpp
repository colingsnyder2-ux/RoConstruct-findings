// roc 2010-06 007fe3c0  unit: CXTPControlSelector  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe3c0
//
// 007fe3c0  8b442404             mov eax, dword ptr [esp + 4]
// 007fe3c4  85c0                 test eax, eax
// 007fe3c6  7425                 je 0x7fe3ed
// 007fe3c8  83f8ff               cmp eax, -1
// 007fe3cb  7420                 je 0x7fe3ed
// 007fe3cd  8a08                 mov cl, byte ptr [eax]
// 007fe3cf  8bd0                 mov edx, eax
// 007fe3d1  84c9                 test cl, cl
// 007fe3d3  7415                 je 0x7fe3ea
// 007fe3d5  80f926               cmp cl, 0x26
// 007fe3d8  7505                 jne 0x7fe3df
// 007fe3da  384801               cmp byte ptr [eax + 1], cl
// 007fe3dd  7503                 jne 0x7fe3e2
// 007fe3df  880a                 mov byte ptr [edx], cl
// 007fe3e1  42                   inc edx
// 007fe3e2  8a4801               mov cl, byte ptr [eax + 1]
// 007fe3e5  40                   inc eax
// 007fe3e6  84c9                 test cl, cl
// 007fe3e8  75eb                 jne 0x7fe3d5
// 007fe3ea  c60200               mov byte ptr [edx], 0
// 007fe3ed  c3                   ret 
// copied from an identical function in another client (function ?strip_ampersands@ns_ROCX00001b@@YAPADPAD@Z)

namespace ns_ROCX00001b {
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
