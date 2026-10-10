// from server: 66% by colin
extern "C" double atan2(double, double);

struct RBX_World_AngleHelper {
    float computeAngle(const float* v) const;
};

float RBX_World_AngleHelper::computeAngle(const float* v) const {
    float a = -v[0];
    float b = -v[2];
    return (float)atan2((double)a, (double)b);
}
