// roc 2009-12 0073be00  unit: RBX::Network::P8Player::?$GetSetImpl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073be00
//
// 0073be00  8b442404             mov eax, dword ptr [esp + 4]
// 0073be04  8bd1                 mov edx, ecx
// 0073be06  85c0                 test eax, eax
// 0073be08  7415                 je 0x73be1f
// 0073be0a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0073be0e  51                   push ecx
// 0073be0f  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0073be12  8b5210               mov edx, dword ptr [edx + 0x10]
// 0073be15  83c0e4               add eax, -0x1c
// 0073be18  03c8                 add ecx, eax
// 0073be1a  ffd2                 call edx
// 0073be1c  c20800               ret 8
// 0073be1f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0073be23  51                   push ecx
// 0073be24  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0073be27  8b5210               mov edx, dword ptr [edx + 0x10]
// 0073be2a  33c0                 xor eax, eax
// 0073be2c  03c8                 add ecx, eax
// 0073be2e  ffd2                 call edx
// 0073be30  c20800               ret 8
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