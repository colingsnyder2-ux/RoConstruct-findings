// from server: 100% by tester
// roc 2009-06 005108c0  unit: CSHA1  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005108c0
//
// 005108c0  a1cc12a400           mov eax, dword ptr [0xa412cc]
// 005108c5  85c0                 test eax, eax
// 005108c7  741c                 je 0x5108e5
// 005108c9  83f801               cmp eax, 1
// 005108cc  7e07                 jle 0x5108d5
// 005108ce  48                   dec eax
// 005108cf  a3cc12a400           mov dword ptr [0xa412cc], eax
// 005108d4  c3                   ret 
// 005108d5  ff15f8ef8900         call dword ptr [0x89eff8]
// 005108db  c705cc12a40000000000 mov dword ptr [0xa412cc], 0
// 005108e5  c3                   ret 

extern "C" int __declspec(dllimport) __stdcall WSACleanup();

struct ProfiledRakPeer
{
    void f();
};

int g_0052cb9650;

void ProfiledRakPeer::f()
{
    if (g_0052cb9650)
    {
        if (g_0052cb9650 > 1)
            --g_0052cb9650;
        else
        {
            WSACleanup();
            g_0052cb9650 = 0;
        }
    }
}
