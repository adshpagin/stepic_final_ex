#include "logic.hxx"

void Logic::RequestHandler::onRequest(const HTTP::Request &req, HTTP::Response &resp) {

  resp.m_code = HTTP::StatusCode::OK_200;

  resp.m_body << "<html>" << std::endl; 
  resp.m_body << "<body>" << std::endl; 
  resp.m_body << "<h1>Test web page!</h1>" << std::endl; 
  resp.m_body << "</body>" << std::endl; 
  resp.m_body << "</html>" << std::endl; 
}