// roc 2008-06 005737e0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005737e0
//
// 005737e0  83ec30               sub esp, 0x30
// 005737e3  d905784d9700         fld dword ptr [0x974d78]
// 005737e9  56                   push esi
// 005737ea  d95c2404             fstp dword ptr [esp + 4]
// 005737ee  57                   push edi
// 005737ef  d9057c4d9700         fld dword ptr [0x974d7c]
// 005737f5  8bf1                 mov esi, ecx
// 005737f7  d95c240c             fstp dword ptr [esp + 0xc]
// 005737fb  e8a063f9ff           call 0x509ba0
// 00573800  d900                 fld dword ptr [eax]
// 00573802  8d4c2408             lea ecx, [esp + 8]
// 00573806  d95c2418             fstp dword ptr [esp + 0x18]
// 0057380a  51                   push ecx
// 0057380b  d94004               fld dword ptr [eax + 4]
// 0057380e  8b06                 mov eax, dword ptr [esi]
// 00573810  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00573813  d95c2420             fstp dword ptr [esp + 0x20]
// 00573817  d944240c             fld dword ptr [esp + 0xc]
// 0057381b  8bce                 mov ecx, esi
// 0057381d  d95c2424             fstp dword ptr [esp + 0x24]
// 00573821  d9442410             fld dword ptr [esp + 0x10]
// 00573825  d95c2428             fstp dword ptr [esp + 0x28]
// 00573829  ffd2                 call edx
// 0057382b  8bf8                 mov edi, eax
// 0057382d  e86e63f9ff           call 0x509ba0
// 00573832  d900                 fld dword ptr [eax]
// 00573834  0fbf8e66010000       movsx ecx, word ptr [esi + 0x166]
// 0057383b  d95c2428             fstp dword ptr [esp + 0x28]
// 0057383f  d94004               fld dword ptr [eax + 4]
// 00573842  0fbf8664010000       movsx eax, word ptr [esi + 0x164]
// 00573849  d95c242c             fstp dword ptr [esp + 0x2c]
// 0057384d  d907                 fld dword ptr [edi]
// 0057384f  d95c2430             fstp dword ptr [esp + 0x30]
// 00573853  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 00573859  d94704               fld dword ptr [edi + 4]
// 0057385c  89442408             mov dword ptr [esp + 8], eax
// 00573860  d95c2434             fstp dword ptr [esp + 0x34]
// 00573864  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0057386a  db442408             fild dword ptr [esp + 8]
// 0057386e  894c2408             mov dword ptr [esp + 8], ecx
// 00573872  d9442418             fld dword ptr [esp + 0x18]
// 00573876  52                   push edx
// 00573877  50                   push eax
// 00573878  d8c1                 fadd st(1)
// 0057387a  8d4c2430             lea ecx, [esp + 0x30]
// 0057387e  db442410             fild dword ptr [esp + 0x10]
// 00573882  51                   push ecx
// 00573883  d9442428             fld dword ptr [esp + 0x28]
// 00573887  8d542414             lea edx, [esp + 0x14]
// 0057388b  52                   push edx
// 0057388c  d8c1                 fadd st(1)
// 0057388e  8d4c2428             lea ecx, [esp + 0x28]
// 00573892  d9442430             fld dword ptr [esp + 0x30]
// 00573896  dee4                 fsubrp st(4)
// 00573898  d9442434             fld dword ptr [esp + 0x34]
// 0057389c  dee2                 fsubrp st(2)
// 0057389e  d9ca                 fxch st(2)
// 005738a0  d95c2428             fstp dword ptr [esp + 0x28]
// 005738a4  d9c9                 fxch st(1)
// 005738a6  d95c242c             fstp dword ptr [esp + 0x2c]
// 005738aa  d9c9                 fxch st(1)
// 005738ac  d95c2430             fstp dword ptr [esp + 0x30]
// 005738b0  d95c2434             fstp dword ptr [esp + 0x34]
// 005738b4  e8a7b60500           call 0x5cef60
// 005738b9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005738bd  d900                 fld dword ptr [eax]
// 005738bf  d919                 fstp dword ptr [ecx]
// 005738c1  5f                   pop edi
// 005738c2  d94004               fld dword ptr [eax + 4]
// 005738c5  8bc1                 mov eax, ecx
// 005738c7  d95904               fstp dword ptr [ecx + 4]
// 005738ca  5e                   pop esi
// 005738cb  83c430               add esp, 0x30
// 005738ce  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?getPosition@RelativePanel@RBX@@UBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/gui/GUI.cpp
