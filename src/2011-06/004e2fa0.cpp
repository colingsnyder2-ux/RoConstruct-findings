// roc 2011-06 004e2fa0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e2fa0
//
// 004e2fa0  8b442404             mov eax, dword ptr [esp + 4]
// 004e2fa4  8bd1                 mov edx, ecx
// 004e2fa6  85c0                 test eax, eax
// 004e2fa8  7415                 je 0x4e2fbf
// 004e2faa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e2fae  51                   push ecx
// 004e2faf  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 004e2fb2  8b5210               mov edx, dword ptr [edx + 0x10]
// 004e2fb5  83c0e4               add eax, -0x1c
// 004e2fb8  03c8                 add ecx, eax
// 004e2fba  ffd2                 call edx
// 004e2fbc  c20800               ret 8
// 004e2fbf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e2fc3  51                   push ecx
// 004e2fc4  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 004e2fc7  8b5210               mov edx, dword ptr [edx + 0x10]
// 004e2fca  33c0                 xor eax, eax
// 004e2fcc  03c8                 add ecx, eax
// 004e2fce  ffd2                 call edx
// 004e2fd0  c20800               ret 8
// copied from an identical function in another client (function ?setValue@?$GetSetImpl@P8Class@@BEABVValue@@XZP81@AEXABV2@@Z@@UBEXPAVDescribedBase@@ABVValue@@@Z)

// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// Codegen analog of reflection GetSetImpl::setValue. The target converts
// DescribedBase* to Class* with "add eax,-0x1c": DescribedBase sits at +0x1c.
// Set member pointer is an 8-byte {fn, adj} pair at +0x10.

class DescribedBase { public: virtual ~DescribedBase(); };
// Bytes preceding DescribedBase in Class, sized from the target's 0x1c adjust.
class Before { public: virtual ~Before(); int words[6]; };
class Value { public: int words[1]; };
class Class : public Before, public DescribedBase {
public:
	const Value& getIt() const;
	void setIt(const Value& value);
};

class GetSet {
public:
	virtual ~GetSet() {}
	virtual bool isReadOnly() const = 0;
	virtual void setValue(DescribedBase* object, const Value& value) const = 0;
	int reserved;
};

template<typename GetFunction, typename SetFunction>
class GetSetImpl : public GetSet {
	GetFunction get;
	SetFunction set;
public:
	GetSetImpl(GetFunction get, SetFunction set) : get(get), set(set) {}
	virtual bool isReadOnly() const { return false; }
	virtual void setValue(DescribedBase* object, const Value& value) const
	{
		Class* o = (Class*)object;
		(o->*set)(value);
	}
};

template class GetSetImpl<const Value& (Class::*)() const, void (Class::*)(const Value&)>;