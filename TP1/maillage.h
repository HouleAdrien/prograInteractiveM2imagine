#ifndef MAILLAGE_H
#define MAILLAGE_H
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>

class Maillage : protected QOpenGLFunctions
{
public:
    Maillage();
    virtual ~Maillage();
    void drawCubeGeometry(QOpenGLShaderProgram *program);

private:
    void initCubeGeometry();

    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;
};

#endif // MAILLAGE_H
