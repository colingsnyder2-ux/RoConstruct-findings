// roc 2009-06 0076f590  unit: CXTPControlSelector  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076f590
//
// 0076f590  8b442404             mov eax, dword ptr [esp + 4]
// 0076f594  85c0                 test eax, eax
// 0076f596  7425                 je 0x76f5bd
// 0076f598  83f8ff               cmp eax, -1
// 0076f59b  7420                 je 0x76f5bd
// 0076f59d  8a08                 mov cl, byte ptr [eax]
// 0076f59f  8bd0                 mov edx, eax
// 0076f5a1  84c9                 test cl, cl
// 0076f5a3  7415                 je 0x76f5ba
// 0076f5a5  80f926               cmp cl, 0x26
// 0076f5a8  7505                 jne 0x76f5af
// 0076f5aa  384801               cmp byte ptr [eax + 1], cl
// 0076f5ad  7503                 jne 0x76f5b2
// 0076f5af  880a                 mov byte ptr [edx], cl
// 0076f5b1  42                   inc edx
// 0076f5b2  8a4801               mov cl, byte ptr [eax + 1]
// 0076f5b5  40                   inc eax
// 0076f5b6  84c9                 test cl, cl
// 0076f5b8  75eb                 jne 0x76f5a5
// 0076f5ba  c60200               mov byte ptr [edx], 0
// 0076f5bd  c3                   ret 
// copied from an identical function in another client (function ?strip_ampersands@ns_ROCX00004f@@YAPADPAD@Z)

namespace ns_ROCX00004f {
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
