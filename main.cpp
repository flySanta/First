#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!"); //comment
button.resize(200, 60); //comment222
button.show( );
 
return app.exec( );
}
