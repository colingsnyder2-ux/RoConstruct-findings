// roc 2009-06 007bfca0  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bfca0
//
// 007bfca0  8b8944020000         mov ecx, dword ptr [ecx + 0x244]
// 007bfca6  83e1fb               and ecx, 0xfffffffb
// 007bfca9  33c0                 xor eax, eax
// 007bfcab  83f908               cmp ecx, 8
// 007bfcae  771b                 ja 0x7bfccb
// 007bfcb0  ff248dccfc7b00       jmp dword ptr [ecx*4 + 0x7bfccc]
// 007bfcb7  33c0                 xor eax, eax
// 007bfcb9  c3                   ret 
// 007bfcba  b801000000           mov eax, 1
// 007bfcbf  c3                   ret 
// 007bfcc0  b802000000           mov eax, 2
// 007bfcc5  c3                   ret 
// 007bfcc6  b808000000           mov eax, 8
// 007bfccb  c3                   ret 
// 007bfccc  b7fc                 mov bh, 0xfc
// 007bfcce  7b00                 jnp 0x7bfcd0
// 007bfcd0  bafc7b00c0           mov edx, 0xc0007bfc
// 007bfcd5  fc                   cld 
// 007bfcd6  7b00                 jnp 0x7bfcd8
// 007bfcd8  cb                   retf 
// 007bfcd9  fc                   cld 
// 007bfcda  7b00                 jnp 0x7bfcdc
// 007bfcdc  cb                   retf 
// 007bfcdd  fc                   cld 
// 007bfcde  7b00                 jnp 0x7bfce0
// 007bfce0  cb                   retf 
// 007bfce1  fc                   cld 
// 007bfce2  7b00                 jnp 0x7bfce4
// 007bfce4  cb                   retf 
// 007bfce5  fc                   cld 
// 007bfce6  7b00                 jnp 0x7bfce8
// 007bfce8  cb                   retf 
// 007bfce9  fc                   cld 
// 007bfcea  7b00                 jnp 0x7bfcec
// copied from an identical function in another client (function ?GetFooterRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp