// from server: 100% by tester
// roc 2008-06 00401000  unit: seg_00400000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401000
//
// 00401000  8b442404             mov eax, dword ptr [esp + 4]
// 00401004  3d0e000780           cmp eax, 0x8007000e
// 00401009  7505                 jne 0x401010
// 0040100b  e876f62900           call 0x6a0686
// 00401010  50                   push eax
// 00401011  e86af62900           call 0x6a0680

typedef long HRESULT;

__declspec(noreturn) void __stdcall AfxThrowMemoryException();
__declspec(noreturn) void __stdcall AfxThrowOleException(HRESULT sc);

namespace ATL {
void __stdcall AtlThrowImpl(HRESULT hr)
{
    if (hr == 0x8007000EL)
        AfxThrowMemoryException();
    AfxThrowOleException(hr);
}
}
