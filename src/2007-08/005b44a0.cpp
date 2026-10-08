// from server: 20% by colin
// roc 2007-08 005b44a0  unit: RBX::Connector  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b44a0
//
// 005b44a0  d9ee                 fldz 
// 005b44a2  c3                   ret 

struct RBX_Connector {
    virtual ~RBX_Connector();
};

RBX_Connector::~RBX_Connector() {
}
