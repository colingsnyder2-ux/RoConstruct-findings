// roc 2010-06 0055e960  unit: G3D::TextInput::WrongSymbol  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e960
//
// 0055e960  ba01000000           mov edx, 1
// 0055e965  841550a1c000         test byte ptr [0xc0a150], dl
// 0055e96b  7562                 jne 0x55e9cf
// 0055e96d  a1a03cc000           mov eax, dword ptr [0xc03ca0]
// 0055e972  091550a1c000         or dword ptr [0xc0a150], edx
// 0055e978  8b0df0a69e00         mov ecx, dword ptr [0x9ea6f0]
// 0055e97e  84c2                 test dl, al
// 0055e980  7535                 jne 0x55e9b7
// 0055e982  0bc2                 or eax, edx
// 0055e984  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 0055e989  dd01                 fld qword ptr [ecx]
// 0055e98b  dd1d983cc000         fstp qword ptr [0xc03c98]
// 0055e991  84c2                 test dl, al
// 0055e993  7522                 jne 0x55e9b7
// 0055e995  0bc2                 or eax, edx
// 0055e997  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 0055e99c  dd01                 fld qword ptr [ecx]
// 0055e99e  dd1d983cc000         fstp qword ptr [0xc03c98]
// 0055e9a4  84c2                 test dl, al
// 0055e9a6  750f                 jne 0x55e9b7
// 0055e9a8  0bc2                 or eax, edx
// 0055e9aa  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 0055e9af  dd01                 fld qword ptr [ecx]
// 0055e9b1  dd1d983cc000         fstp qword ptr [0xc03c98]
// 0055e9b7  dd05983cc000         fld qword ptr [0xc03c98]
// 0055e9bd  d91544a1c000         fst dword ptr [0xc0a144]
// 0055e9c3  d91548a1c000         fst dword ptr [0xc0a148]
// 0055e9c9  d91d4ca1c000         fstp dword ptr [0xc0a14c]
// 0055e9cf  b844a1c000           mov eax, 0xc0a144
// 0055e9d4  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?inf@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
