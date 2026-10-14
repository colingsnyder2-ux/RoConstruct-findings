// roc 2008-06 0061cf30  unit: RBX::Lua::LuaArguments  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061cf30
//
// 0061cf30  83ec0c               sub esp, 0xc
// 0061cf33  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061cf38  53                   push ebx
// 0061cf39  56                   push esi
// 0061cf3a  57                   push edi
// 0061cf3b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061cf3f  50                   push eax
// 0061cf40  6a01                 push 1
// 0061cf42  57                   push edi
// 0061cf43  e86846ffff           call 0x6115b0
// 0061cf48  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 0061cf4e  51                   push ecx
// 0061cf4f  6a02                 push 2
// 0061cf51  57                   push edi
// 0061cf52  8bf0                 mov esi, eax
// 0061cf54  e85746ffff           call 0x6115b0
// 0061cf59  6a03                 push 3
// 0061cf5b  57                   push edi
// 0061cf5c  8bd8                 mov ebx, eax
// 0061cf5e  e8cdf8ffff           call 0x61c830
// 0061cf63  d903                 fld dword ptr [ebx]
// 0061cf65  d826                 fsub dword ptr [esi]
// 0061cf67  6a0c                 push 0xc
// 0061cf69  d94304               fld dword ptr [ebx + 4]
// 0061cf6c  57                   push edi
// 0061cf6d  d86604               fsub dword ptr [esi + 4]
// 0061cf70  d94308               fld dword ptr [ebx + 8]
// 0061cf73  d86608               fsub dword ptr [esi + 8]
// 0061cf76  d9ca                 fxch st(2)
// 0061cf78  d8cb                 fmul st(3)
// 0061cf7a  d9c9                 fxch st(1)
// 0061cf7c  d8cb                 fmul st(3)
// 0061cf7e  d9ca                 fxch st(2)
// 0061cf80  decb                 fmulp st(3)
// 0061cf82  d806                 fadd dword ptr [esi]
// 0061cf84  d95c2434             fstp dword ptr [esp + 0x34]
// 0061cf88  d84604               fadd dword ptr [esi + 4]
// 0061cf8b  d95c2438             fstp dword ptr [esp + 0x38]
// 0061cf8f  d84608               fadd dword ptr [esi + 8]
// 0061cf92  d95c243c             fstp dword ptr [esp + 0x3c]
// 0061cf96  e8a55cffff           call 0x612c40
// 0061cf9b  83c428               add esp, 0x28
// 0061cf9e  85c0                 test eax, eax
// 0061cfa0  7414                 je 0x61cfb6
// 0061cfa2  d944240c             fld dword ptr [esp + 0xc]
// 0061cfa6  d918                 fstp dword ptr [eax]
// 0061cfa8  d9442410             fld dword ptr [esp + 0x10]
// 0061cfac  d95804               fstp dword ptr [eax + 4]
// 0061cfaf  d9442414             fld dword ptr [esp + 0x14]
// 0061cfb3  d95808               fstp dword ptr [eax + 8]
// 0061cfb6  8b15c0b19500         mov edx, dword ptr [0x95b1c0]
// 0061cfbc  52                   push edx
// 0061cfbd  68f0d8ffff           push 0xffffd8f0
// 0061cfc2  57                   push edi
// 0061cfc3  e8c854ffff           call 0x612490
// 0061cfc8  6afe                 push -2
// 0061cfca  57                   push edi
// 0061cfcb  e82058ffff           call 0x6127f0
// 0061cfd0  83c414               add esp, 0x14
// 0061cfd3  5f                   pop edi
// 0061cfd4  5e                   pop esi
// 0061cfd5  b801000000           mov eax, 1
// 0061cfda  5b                   pop ebx
// 0061cfdb  83c40c               add esp, 0xc
// 0061cfde  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?lerp@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp
