// roc 2012-06 00a10be0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a10be0
//
// 00a10be0  56                   push esi
// 00a10be1  8bf1                 mov esi, ecx
// 00a10be3  e87878f7ff           call 0x988460
// 00a10be8  b801000000           mov eax, 1
// 00a10bed  89467c               mov dword ptr [esi + 0x7c], eax
// 00a10bf0  898648010000         mov dword ptr [esi + 0x148], eax
// 00a10bf6  898650010000         mov dword ptr [esi + 0x150], eax
// 00a10bfc  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00a10c02  898654010000         mov dword ptr [esi + 0x154], eax
// 00a10c08  c70654cfc100         mov dword ptr [esi], 0xc1cf54
// 00a10c0e  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 00a10c18  c7862801000003000000 mov dword ptr [esi + 0x128], 3
// 00a10c22  c7868000000008000000 mov dword ptr [esi + 0x80], 8
// 00a10c2c  8bc6                 mov eax, esi
// 00a10c2e  5e                   pop esi
// 00a10c2f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ??0CXTPOfficeTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
